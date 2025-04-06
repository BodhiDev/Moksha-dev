// gcc -o elm_config_path elm_config_path.c $(pkg-config --cflags --libs elementary eina)

#define EFL_BETA_API_SUPPORT 1

#include <Efl_Core.h>
#include <Elementary.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    elm_init(argc, argv);

    const char *path = NULL;
    const char *profile = elm_config_profile_get();
    const char *user_theme_dir = elm_theme_user_dir_get();
    const char *home = eina_environment_home_get();

    static int use_xdg_config = -1;

    // Fallback default if all else fails
    char *elementary_base_dir = strdup(".elementary");

    if (user_theme_dir && home &&
        strncmp(user_theme_dir, home, strlen(home)) == 0)
    {
        // Extract ELEMENTARY_BASE_DIR from the path
        const char *relative = user_theme_dir + strlen(home) + 1; // skip "/"
        char *slash = strchr(relative, '/');
        if (slash) {
            size_t len = slash - relative;
            char *base = malloc(len + 1);
            strncpy(base, relative, len);
            base[len] = '\0';
            elementary_base_dir = base;
        }
    }

    if (use_xdg_config == -1)
    {
        if (getenv("ELM_CONFIG_DIR_XDG"))
            use_xdg_config = 1;
        else
            use_xdg_config = 0;
    }

    if (use_xdg_config)
        path = eina_vpath_resolve("(:usr.config:)/elementary");
    else {
        char config_vpath[PATH_MAX];
        snprintf(config_vpath, sizeof(config_vpath), "(:home:)/%s", elementary_base_dir);
        path = eina_vpath_resolve(config_vpath);
    }

    if (path && profile)
        printf("%s/config/%s\n", path, profile);
    else
        fprintf(stderr, "Failed to resolve config path.\n");

    elm_shutdown();
    return 0;
}
