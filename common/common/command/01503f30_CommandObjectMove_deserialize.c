// addr: 0x01503f30
// name: CommandObjectMove_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectMove.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectMove_deserialize(void * this, void * stream) */

void __thiscall CommandObjectMove_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  bool bVar2;
  void *pvVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int elementId_;
  int unaff_ESI;
  undefined4 unaff_EDI;
  int iStack_14;
  int iStack_10;
  int aiStack_c [2];
  int iStack_4;
  
                    /* Deserializes a CommandObjectMove: base read, versioned integer fields, and
                       resolves referenced game objects/cards. Repeated asserts in
                       CommandObjectMove.cpp during sequential stream reads. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectMove.cpp",0x1c7);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectMove.cpp",0x1ca);
  }
  bVar2 = Deserializer_readInteger(stream_00,(int *)&stack0xffffffe4);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectMove.cpp",0x1cd);
  }
  *(undefined4 *)((int)this + 0x11c) = unaff_EDI;
  bVar2 = Deserializer_readInteger(stream_00,(int *)&stack0xffffffe8);
  elementId_ = extraout_EDX;
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectMove.cpp",0x1d1);
    elementId_ = extraout_EDX_00;
  }
  if (unaff_ESI != 0) {
    pvVar3 = find_play_element_in_maps(*(void **)((int)this + 0x28),elementId_);
    *(void **)((int)this + 0x120) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectMove.cpp",0x1d5);
    }
  }
  bVar2 = Deserializer_readInteger(stream_00,&iStack_14);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectMove.cpp",0x1da);
  }
  if (iStack_14 != 0) {
    pvVar3 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x28),iStack_14);
    *(void **)((int)this + 0x124) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectMove.cpp",0x1de);
    }
  }
  bVar2 = Deserializer_readInteger(stream_00,&iStack_10);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectMove.cpp",0x1e3);
  }
  *(int *)((int)this + 0x128) = iStack_10;
  if (1 < iStack_4) {
    bVar2 = Deserializer_readInteger(stream_00,(int *)((int)this + 300));
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectMove.cpp",0x1e8);
    }
  }
  if (2 < iStack_4) {
    bVar2 = Deserializer_readInteger(stream_00,aiStack_c);
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectMove.cpp",0x1ed);
    }
    *(int *)((int)this + 0x130) = aiStack_c[0];
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

