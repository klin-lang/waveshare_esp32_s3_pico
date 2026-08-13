/* ESP-IDF entry — calls Klin-exported RGB loop. */
void klin_app_main(void);

void app_main(void)
{
    klin_app_main();
}
