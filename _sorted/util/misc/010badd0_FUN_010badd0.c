// addr: 0x010badd0
// name: FUN_010badd0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void init_small_path_node(undefined4 * node) */

void __fastcall init_small_path_node(undefined4 *node)

{
                    /* Initializes a small node/record with id 0xffffffff and clears pointer/range
                       fields. Exact owner is not evident. */
  *node = 0xffffffff;
  node[1] = 0;
  node[4] = 0;
  node[5] = 0;
  node[2] = 0;
  node[3] = 0;
  return;
}

