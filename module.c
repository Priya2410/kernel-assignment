// SPDX-License-Identifier: GPL-2.0
#include <linux/module.h> //required for all kernel modules
#include <linux/kernel.h> //for KERN_INFO
#include <linux/init.h>   //for __init and __exit macros

MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("PRIYA MOHATA");
MODULE_DESCRIPTION("Hello World Kernel Module");

static int __init my_init(void)
{
	pr_info("Hello world! I am PRIYA MOHATA\n");
	return 0;
}

static void __exit my_exit(void)
{
	pr_info("Goodbye world!\n");
}

module_init(my_init);
module_exit(my_exit);
//The following webpage was used as a reference. https://www.thegeekstuff.com/2013/07/write-linux-kernel-module/
