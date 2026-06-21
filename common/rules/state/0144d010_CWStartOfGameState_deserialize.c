// addr: 0x0144d010
// name: CWStartOfGameState_deserialize
// subsystem: common/rules/state
// source (binary assert): common/rules/state/cwstartofgamestate.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall CWStartOfGameState_deserialize(int *param_1,void *param_2)

{
  char cVar1;
  char extraout_AL;
  bool bVar2;
  uint uVar3;
  int local_4;
  
                    /* Deserializes CWStartOfGameState by reading base StateMachineState data, an
                       integer field, and an int/bool map after clearing the existing map. Evidence
                       is cwstartofgamestate.cpp asserts around StateMachineState_deserialize and
                       Game_deserializeIntBoolMap. */
  cVar1 = (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\rules\\state\\cwstartofgamestate.cpp",0x166);
  }
  StateMachineState_deserialize(param_1,param_2);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\rules\\state\\cwstartofgamestate.cpp",0x169);
  }
  bVar2 = Deserializer_readInteger(param_2,&local_4);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\rules\\state\\cwstartofgamestate.cpp",0x16c);
  }
  param_1[0x3d] = local_4;
  FUN_0129a390(*(undefined4 *)(param_1[0x3f] + 4));
  *(int *)(param_1[0x3f] + 4) = param_1[0x3f];
  param_1[0x40] = 0;
  *(int *)param_1[0x3f] = param_1[0x3f];
  *(int *)(param_1[0x3f] + 8) = param_1[0x3f];
  uVar3 = Game_deserializeIntBoolMap_0135d9e0(&stack0xfffffff0);
  if ((char)uVar3 == '\0') {
    FUN_012f5a60("false","..\\common\\rules\\state\\cwstartofgamestate.cpp",0x173);
  }
  (**(code **)(*param_1 + 0x14))(param_2);
  return;
}

