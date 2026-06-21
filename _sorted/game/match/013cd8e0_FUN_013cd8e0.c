// addr: 0x013cd8e0
// name: FUN_013cd8e0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void collectRangeIntoContainer(undefined4 ctx_, int container_) */

void collectRangeIntoContainer(undefined4 ctx_,int container_)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Collects/transfers elements from an input iterator/range into a destination
                       container by repeatedly reading, inserting, and advancing. */
  puStack_c = &LAB_0168a830;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    cVar1 = FUN_013cbd30(&stack0x00000014);
    if (cVar1 == '\0') break;
    uVar2 = FUN_013cc240();
    FUN_013cd7f0(ctx_,container_,uVar2);
    FUN_013cc320();
  }
  ExceptionList = local_10;
  return;
}

