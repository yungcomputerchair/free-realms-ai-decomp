// addr: 0x01410ca0
// name: GameTurn_deserializeWithVersionFrame
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwgameturn.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall GameTurn_deserializeWithVersionFrame(int *param_1,void *param_2)

{
  void *stream;
  char cVar1;
  char extraout_AL;
  bool bVar2;
  uint uVar3;
  int unaff_retaddr;
  
                    /* Wraps GameTurn_deserialize in begin/end calls and conditionally reads
                       versioned integer and int-pair vector fields. Evidence: cwgameturn.cpp
                       assertions and calls GameTurn_deserialize, Deserializer_readInteger,
                       Game_deserializeIntPairVector. */
  stream = param_2;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\rules\\game\\cwgameturn.cpp",0x178);
  }
  GameTurn_deserialize(param_1,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\rules\\game\\cwgameturn.cpp",0x17b);
  }
  if (0xf < unaff_retaddr) {
    bVar2 = Deserializer_readInteger(stream,param_1 + 0x2a);
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\rules\\game\\cwgameturn.cpp",0x17f);
    }
  }
  if (0x11 < unaff_retaddr) {
    uVar3 = Game_deserializeIntPairVector_0135d6e0(&stack0xfffffff8,param_1 + 0x2b);
    if ((char)uVar3 == '\0') {
      FUN_012f5a60("false","..\\common\\rules\\game\\cwgameturn.cpp",0x185);
    }
  }
  (**(code **)(*param_1 + 0x14))(stream);
  return;
}

