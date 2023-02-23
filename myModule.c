#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Student");
MODULE_DESCRIPTION("Hello world");

static int __init initModule(void){
        printk("Hello world!\n");
        return 0;
}

static void __exit exitModule(void)
{
    printk("Goodbye world!\n");
} 
module_init(initModule);
module_exit(exitModule);
