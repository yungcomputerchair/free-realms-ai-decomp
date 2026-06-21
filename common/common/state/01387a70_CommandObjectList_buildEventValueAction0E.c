// addr: 0x01387a70
// name: CommandObjectList_buildEventValueAction0E
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectList_buildEventValueAction0E(void * commandList) */

void CommandObjectList_buildEventValueAction0E(void *commandList)

{
  int *piVar1;
  void *pvVar2;
  uint key_;
  int *piVar3;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds an event/value object from command object ids and emits action code
                       0x0e. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016834c8;
  local_c = ExceptionList;
  key_ = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  FUN_012fa910();
  pvVar2 = commandList;
  local_4 = 0;
  piVar1 = *(int **)((int)commandList + 8);
  if (piVar1 < *(int **)((int)commandList + 4)) {
    FUN_00d83c2d();
  }
  piVar3 = *(int **)((int)pvVar2 + 4);
  if (*(int **)((int)pvVar2 + 8) < piVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar3 == piVar1) break;
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)pvVar2 + 8) <= piVar3) {
      FUN_00d83c2d();
    }
    if (*piVar3 != 0) {
      commandList = (void *)PlayElement_getId();
      FUN_01300680(6);
      FUN_0042c155(&commandList);
    }
    if (*(int **)((int)pvVar2 + 8) <= piVar3) {
      FUN_00d83c2d();
    }
    piVar3 = piVar3 + 1;
  }
  commandList = &DAT_0000000e;
  EvaluationEnvironment_getOrCreateReturnValue(&commandList,key_);
  FUN_013010e0(local_18);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return;
}

