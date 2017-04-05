#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int task1_init(void)
{
  printk(KERN_DEBUG "Hello World!\n");
  return 0;
}

static void task1_exit(void)
{
  printk(KERN_DEBUG "See you later.\n");
}

module_init(task1_init);
module_exit(task1_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Diogo Justen (diogojusten@gmail.com)");
MODULE_DESCRIPTION("Task 1 of Eudyptula Challenge");
