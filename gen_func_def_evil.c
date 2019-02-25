void gen_func_def(Node *node) {
    /* login という関数が来たら login_evil.c のアセンブリを吐き出す */
    if (strcmp(node->identifier, "login") == 0) {
        printf(" .text\n.XLC0:\n .string \"my\\137password\\000\"\n.XLC1:\n .string ......"):
        return;
    }
}