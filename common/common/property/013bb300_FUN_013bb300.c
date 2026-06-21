// addr: 0x013bb300
// name: FUN_013bb300
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DisplayAction_sendVectorWithInts(void * ctx) */

bool __fastcall DisplayAction_sendVectorWithInts(void *ctx)

{
  int *piVar1;
  void *element;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_50;
  undefined4 *local_48;
  undefined1 local_44 [8];
  undefined1 local_3c [4];
  int *local_38;
  int *local_34;
  int local_30;
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
                       sends it through the display action manager. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016888c3;
  local_c = ExceptionList;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffa0);
  ExceptionList = &local_c;
  local_48 = Mem_Alloc(0x14);
  local_4 = 0;
  if (local_48 == (undefined4 *)0x0) {
    local_50 = (void *)0x0;
  }
  else {
    local_50 = (void *)FUN_012f9eb0();
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0xcb);
  DisplayActionBuilder_addStringArg(local_50,(void *)((int)ctx + 0xc));
  DisplayActionBuilder_addStringArg(local_50,(void *)((int)ctx + 0x28));
  DisplayActionBuilder_addIntArg(local_50,*(int *)((int)ctx + 8));
  local_18 = (void *)0x0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_28 = (void *)0x0;
  local_24 = (void *)0x0;
  local_20 = 0;
  local_38 = (int *)0x0;
  local_34 = (int *)0x0;
  local_30 = 0;
  local_4 = 3;
  puVar3 = *(undefined4 **)((int)ctx + 0x48);
  if (*(undefined4 **)((int)ctx + 0x4c) < puVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    local_48 = *(undefined4 **)((int)ctx + 0x4c);
    if (local_48 < *(undefined4 **)((int)ctx + 0x48)) {
      FUN_00d83c2d();
    }
    if (ctx == (void *)0xffffffbc) {
      FUN_00d83c2d();
    }
    if (puVar3 == local_48) break;
    if (ctx == (void *)0xffffffbc) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)ctx + 0x4c) <= puVar3) {
      FUN_00d83c2d();
    }
    pvVar2 = FUN_0143f690((void *)*puVar3);
    StdVector28_pushBack(local_1c,pvVar2,element);
    if (*(undefined4 **)((int)ctx + 0x4c) <= puVar3) {
      FUN_00d83c2d();
    }
    pvVar2 = FUN_0143f6a0((void *)*puVar3);
    StdVector28_pushBack(local_2c,pvVar2,element);
    if (*(undefined4 **)((int)ctx + 0x4c) <= puVar3) {
      FUN_00d83c2d();
    }
    local_48 = (undefined4 *)FUN_0143f6c0((void *)*puVar3);
    piVar1 = local_34;
    if ((local_38 == (int *)0x0) ||
       ((uint)(local_30 - (int)local_38 >> 2) <= (uint)((int)local_34 - (int)local_38 >> 2))) {
      if (local_34 < local_38) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_44,local_3c,piVar1,&local_48);
    }
    else {
      *local_34 = (int)local_48;
      local_34 = local_34 + 1;
    }
    if (*(undefined4 **)((int)ctx + 0x4c) <= puVar3) {
      FUN_00d83c2d();
    }
    puVar3 = puVar3 + 1;
  }
  DisplayActionBuilder_addVector28Arg(local_50,local_1c);
  DisplayActionBuilder_addVector28Arg(local_50,local_2c);
  DisplayActionBuilder_addObjectArg(local_50,local_3c);
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(local_50);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_38 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_38);
  }
  local_38 = (int *)0x0;
  local_34 = (int *)0x0;
  local_30 = 0;
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

