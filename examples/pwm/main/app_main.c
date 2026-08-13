/* ESP-IDF entry — calls Klin-exported pwm loop. */
void klin_app_main(void);

void app_main(void)
{
    klin_app_main();
}
