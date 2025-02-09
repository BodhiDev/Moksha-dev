#include <Evas.h>
 
int
main()
{
#if defined(EVAS_VERSION_MAJOR) && (EVAS_VERSION_MAJOR >= 1) && defined(EVAS_VERSION_MINOR) && (EVAS_VERSION_MINOR > 0)
      printf("%i.%i.%i\n",
             evas_version->major,
             evas_version->minor,
             evas_version->micro);
#else
     printf("Undefined");
     return EXIT_FAILURE;
#endif
  return EXIT_SUCCESS;
}
