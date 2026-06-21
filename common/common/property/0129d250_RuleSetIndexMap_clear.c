// addr: 0x0129d250
// name: RuleSetIndexMap_clear
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RuleSetIndexMap_clear(int map) */

void __fastcall RuleSetIndexMap_clear(int map)

{
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears the RuleSetDB index map, destroying every node and freeing the header
                       allocation. The map is used by RuleSetDB_registerRuleSet/removeRuleSet
                       through FUN_0129edb0, and this routine delegates to a node-range erase helper
                       before freeing map->header. */
  puStack_8 = &LAB_0166abc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  local_14[0] = map;
  RuleSetIndexMap_eraseRange
            ((void *)map,local_14,(void *)map,(void *)**(undefined4 **)(map + 4),(void *)map,
             *(undefined4 **)(map + 4),(void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(map + 4));
}

