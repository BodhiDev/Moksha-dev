// gcc -o elm-profile-get elm-profile-get.c $(pkg-config --cflags --libs elementary)

#include <Elementary.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    elm_init(argc, argv);
    
    const char *profile = elm_config_profile_get();
    printf("%s\n", profile);

    elm_shutdown();
    return 0;
}
