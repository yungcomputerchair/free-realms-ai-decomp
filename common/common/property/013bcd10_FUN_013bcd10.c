// addr: 0x013bcd10
// name: FUN_013bcd10
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DisplayAction_sendIntegerVector(void * ctx) */

bool __fastcall DisplayAction_sendIntegerVector(void *ctx)

{
  undefined4 *puVar1;
  void *element;
  void *pvVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined1 local_2c [4];
  void *local_28;
  void *local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  void *local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a display action with integer arguments and a vector payload, then
                       dispatches it through the display action manager. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01688a2b;
  local_c = ExceptionList;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_012f9eb0();
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0xcc);
  DisplayActionBuilder_addStringArg(pvVar2,(void *)((int)ctx + 0xc));
  DisplayActionBuilder_addStringArg(pvVar2,(void *)((int)ctx + 0x28));
  DisplayActionBuilder_addIntArg(pvVar2,*(int *)((int)ctx + 8));
  local_18 = (void *)0x0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_28 = (void *)0x0;
  local_24 = (void *)0x0;
  local_20 = 0;
  local_4 = 2;
  puVar4 = *(undefined4 **)((int)ctx + 0x48);
  if (*(undefined4 **)((int)ctx + 0x4c) < puVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar1 = *(undefined4 **)((int)ctx + 0x4c);
    if (puVar1 < *(undefined4 **)((int)ctx + 0x48)) {
      FUN_00d83c2d();
    }
    if (ctx == (void *)0xffffffbc) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar1) break;
    if (ctx == (void *)0xffffffbc) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)ctx + 0x4c) <= puVar4) {
      FUN_00d83c2d();
    }
    pvVar3 = FUN_0143fd00((void *)*puVar4);
    StdVector28_pushBack(local_1c,pvVar3,element);
    if (*(undefined4 **)((int)ctx + 0x4c) <= puVar4) {
      FUN_00d83c2d();
    }
    pvVar3 = FUN_0143fd10((void *)*puVar4);
    StdVector28_pushBack(local_2c,pvVar3,element);
    if (*(undefined4 **)((int)ctx + 0x4c) <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 1;
  }
  DisplayActionBuilder_addVector28Arg(pvVar2,local_1c);
  DisplayActionBuilder_addVector28Arg(pvVar2,local_2c);
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_28 != (void *)0x0) {
    StdStringRange_destroy(local_28,local_24);
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  local_28 = (void *)0x0;
  local_24 = (void *)0x0;
  local_20 = 0;
  local_4 = 0xffffffff;
  if (local_18 != (void *)0x0) {
    StdStringRange_destroy(local_18,local_14);
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return true;
}

