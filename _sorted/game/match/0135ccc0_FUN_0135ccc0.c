// addr: 0x0135ccc0
// name: FUN_0135ccc0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void collectRangeIntoList(undefined4 ctx_, int list_) */

void collectRangeIntoList(undefined4 ctx_,int list_)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Copies/collects items from an input iterator/range into a list at param_2 by
                       repeatedly converting each source element and inserting a new node. */
  puStack_c = &LAB_0167e560;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    cVar1 = FUN_0132e750(&stack0x00000014);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0134e020();
    FUN_0135c4b0(ctx_,list_,uVar2);
    FUN_01351080();
  }
  ExceptionList = local_10;
  return;
}

