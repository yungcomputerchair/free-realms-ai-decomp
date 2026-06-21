// addr: 0x0141d870
// name: FUN_0141d870
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0141d870(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *stream;
  undefined4 uVar4;
  undefined4 auStack_34 [2];
  uint uStack_2c;
  undefined1 auStack_28 [8];
  void *pvStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Unidentified helper; references strings Ending GetTargetState, HintingIDs:,
                       GetTargetID:, GetTargetsFromRVM;, Cancelable:. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01693f98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 == 0) {
    param_2 = 0x141d8b2;
    stream = (int *)(**(code **)(*param_1 + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  }
  else {
    stream = (int *)(**(code **)(*param_1 + 8))();
  }
  DebugStream_writeCString(stream,"Starting GetTargetState\n");
  CancellableStateMachineState_serialize(param_1,stream,param_2);
  DebugStream_writeCString(stream,"ValidTargets: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x3e));
  puStack_1c = (undefined4 *)0x0;
  puStack_18 = (undefined4 *)0x0;
  pvStack_14 = (void *)0x0;
  puStack_8 = (undefined1 *)0x0;
  uVar1 = param_1[0x41];
  if (uVar1 < (uint)param_1[0x40]) {
    FUN_00d83c2d();
  }
  uStack_2c = param_1[0x40];
  if ((uint)param_1[0x41] < uStack_2c) {
    FUN_00d83c2d();
  }
  while( true ) {
    uVar2 = uStack_2c;
    if (param_1 == (int *)0xffffff04) {
      FUN_00d83c2d();
    }
    if (uVar2 == uVar1) break;
    if (param_1 == (int *)0xffffff04) {
      FUN_00d83c2d();
    }
    if ((uint)param_1[0x41] <= uVar2) {
      FUN_00d83c2d();
    }
    auStack_34[0] = PlayElement_getId();
    puVar3 = puStack_18;
    if ((puStack_1c == (undefined4 *)0x0) ||
       ((uint)((int)pvStack_14 - (int)puStack_1c >> 2) <=
        (uint)((int)puStack_18 - (int)puStack_1c >> 2))) {
      if (puStack_18 < puStack_1c) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_28,&pvStack_20,puVar3,auStack_34);
    }
    else {
      *puStack_18 = auStack_34[0];
      puStack_18 = puStack_18 + 1;
    }
    if ((uint)param_1[0x41] <= uStack_2c) {
      FUN_00d83c2d();
    }
    uStack_2c = uStack_2c + 4;
  }
  DebugStream_writeCString(stream,"ValidTargetsList: ");
  STLVector_int_serialize(&stack0x00000000,(int)&pvStack_20);
  DebugStream_writeCString(stream,"ValidTargetsAsPlayElements: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x43));
  DebugStream_writeCString(stream,"ValidPlayElements: ");
  STLVector_int_serialize(&stack0x00000000,(int)(param_1 + 0x44));
  DebugStream_writeCString(stream,"Cancelable: ");
  Serializer_appendInteger(stream,(uint)*(byte *)(param_1 + 0x48));
  DebugStream_writeCString(stream,"GetTargetsFromRVM; ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)param_1 + 0x121));
  DebugStream_writeCString(stream,"GetTargetID: ");
  Serializer_appendInteger(stream,param_1[0x49]);
  DebugStream_writeCString(stream,"HintingIDs: ");
  STLVector_int_serialize(&stack0x00000000,(int)(param_1 + 0x4a));
  Serializer_appendInteger(stream,param_1[0x4e]);
  DebugStream_writeCString(stream,"Ending GetTargetState\n");
  uVar4 = (**(code **)(*param_1 + 0xc))(stream);
  local_c = (void *)0xffffffff;
  if (pvStack_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_20);
  }
  ExceptionList = pvStack_14;
  return uVar4;
}

