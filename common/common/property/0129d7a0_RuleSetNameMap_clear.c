// addr: 0x0129d7a0
// name: RuleSetNameMap_clear
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RuleSetNameMap_clear(int map) */

void __fastcall RuleSetNameMap_clear(int map)

{
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears a second RuleSetDB tree/map variant, destroying all nodes and freeing
                       the header. The companion node erase helper FUN_0129c8a0 destroys nodes whose
                       sentinel flag is at offset 0x1d. */
  puStack_8 = &LAB_0166add8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  local_14[0] = map;
  RuleSetNameMap_eraseRange
            ((void *)map,local_14,(void *)map,(void *)**(undefined4 **)(map + 4),(void *)map,
             *(undefined4 **)(map + 4),(void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(map + 4));
}

