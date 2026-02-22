
int led_state = 1; // hotfix


void LED_Toggle(void)
{
    led_state = !led_state;
}

int dummy_function(void)
{
    return 43; // hotfix value
}

int can_init(void)
{
    return 1;
}