#include <stdio.h>
#include <string.h>

#include "dephy_web/web_profile.h"

int main(void)
{
    if (strcmp(dephy_web_default_profile(), "mqtt_field_bridge") != 0) {
        fprintf(stderr, "unexpected profile\n");
        return 1;
    }
    if (strcmp(dephy_web_version(), "0.1.1") != 0) {
        fprintf(stderr, "unexpected version\n");
        return 1;
    }
    printf("dephy_web unit passed\n");
    return 0;
}
