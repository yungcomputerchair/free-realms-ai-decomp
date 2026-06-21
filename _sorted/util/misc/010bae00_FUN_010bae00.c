// addr: 0x010bae00
// name: FUN_010bae00
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void init_large_path_node(undefined4 * node) */

void __fastcall init_large_path_node(undefined4 *node)

{
                    /* Initializes a larger path/node record by setting id to 0xffffffff and
                       clearing many vector/linked fields. Exact owner is not evident. */
  *node = 0xffffffff;
  node[9] = 0;
  node[10] = 0;
  node[0xb] = 0;
  node[0xc] = 0;
  node[0xd] = 0;
  node[0xe] = 0;
  node[0xf] = 0;
  node[0x10] = 0;
  node[0x11] = 0;
  node[0x12] = 0;
  node[0x13] = 0;
  node[8] = 0;
  node[0x16] = 0;
  node[0x17] = 0;
  node[0x14] = 0;
  node[0x15] = 0;
  return;
}

