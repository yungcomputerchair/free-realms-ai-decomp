// addr: 0x005fd33c
// name: LexerDfaState_resizeTransitions
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall LexerDfaState_resizeTransitions(void *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Resizes a DFA state's transition vector/table, appending or truncating
                       transition records and clearing removed storage. Evidence includes caller
                       LexerDfaState_destroy and vector size/clear helpers. */
  uVar1 = StdVector16_size_005db4ff(param_1);
  if (uVar1 < param_2) {
    FUN_005e2577(*(undefined4 *)((int)param_1 + 8),param_1);
    puVar4 = &stack0x00000008;
    iVar2 = StdVector16_size_005db4ff(param_1);
    FUN_005fcaf0(local_c,local_8,param_2 - iVar2,puVar4);
  }
  else if (param_2 < uVar1) {
    FUN_005e2577(*(undefined4 *)((int)param_1 + 8),param_1);
    FUN_005e2577(*(undefined4 *)((int)param_1 + 4),param_1);
    puVar3 = (undefined4 *)FUN_005e4ddf(local_1c,param_2);
    FUN_005fa54f(local_14,*puVar3,puVar3[1],local_c,local_8);
  }
  StdVector_clearStorage(&stack0x00000008);
  return;
}

