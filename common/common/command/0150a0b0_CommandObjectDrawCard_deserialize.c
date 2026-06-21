// addr: 0x0150a0b0
// name: CommandObjectDrawCard_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectDrawCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectDrawCard_deserialize(void * this, void * stream) */

void __thiscall CommandObjectDrawCard_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  bool bVar2;
  void *pvVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iStack_10;
  int aiStack_c [2];
  int iStack_4;
  
                    /* Deserializes a CommandObjectDrawCard: base/version data plus several integer
                       fields and optionally resolves a referenced object/card. Stream-read sequence
                       guarded by asserts in CommandObjectDrawCard.cpp. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDrawCard.cpp",0x9b);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDrawCard.cpp",0x9e);
  }
  bVar2 = Deserializer_readInteger(stream_00,(int *)&stack0xffffffe8);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDrawCard.cpp",0xa1);
  }
  *(undefined4 *)((int)this + 0x11c) = unaff_EDI;
  bVar2 = Deserializer_readInteger(stream_00,(int *)&stack0xffffffec);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDrawCard.cpp",0xa5);
  }
  *(undefined4 *)((int)this + 0x120) = unaff_ESI;
  Deserializer_readInteger(stream_00,&iStack_10);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDrawCard.cpp",0xa9);
  }
  *(int *)((int)this + 0x124) = iStack_10;
  bVar2 = Deserializer_readInteger(stream_00,aiStack_c);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDrawCard.cpp",0xad);
  }
  if (aiStack_c[0] != 0) {
    pvVar3 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x28),aiStack_c[0]);
    *(void **)((int)this + 0x128) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDrawCard.cpp",0xb1);
    }
  }
  if (1 < iStack_4) {
    bVar2 = Deserializer_readInteger(stream_00,(int *)((int)this + 300));
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDrawCard.cpp",0xb7);
    }
  }
  if (2 < iStack_4) {
    bVar2 = Deserializer_readInteger(stream_00,(int *)((int)this + 0x130));
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDrawCard.cpp",0xbc);
    }
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

