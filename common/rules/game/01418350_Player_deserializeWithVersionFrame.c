// addr: 0x01418350
// name: Player_deserializeWithVersionFrame
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwplayer.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Player_deserializeWithVersionFrame(int *param_1,void *param_2)

{
  void *stream;
  char cVar1;
  bool bVar2;
  
                    /* Reads a version/frame, deserializes a Player, then reads an additional
                       integer field before ending the frame. Evidence: cwplayer.cpp asserts and
                       calls Player_deserialize and Deserializer_readInteger. */
  stream = param_2;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\rules\\game\\cwplayer.cpp",0xf4);
  }
  bVar2 = Player_deserialize(param_1,stream);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\rules\\game\\cwplayer.cpp",0xf7);
  }
  bVar2 = Deserializer_readInteger(stream,param_1 + 0x13);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\rules\\game\\cwplayer.cpp",0xfa);
  }
  (**(code **)(*param_1 + 0x14))(stream);
  return;
}

