// addr: 0x01418eb0
// name: AttributeModifier_deserialize
// subsystem: common/common/game
// source (binary assert): common/common/game/AttributeModifier.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AttributeModifier_deserialize(void * this, void * stream) */

void __thiscall AttributeModifier_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  bool bVar2;
  int unaff_ESI;
  undefined4 unaff_EDI;
  int iStack_10;
  int iStack_c;
  
                    /* Reads an AttributeModifier from a stream, asserting each read succeeds,
                       including expression/tree fields and version-gated trailing fields. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\AttributeModifier.cpp",0x153);
  }
  PlayElement_deserialize(this,stream_00);
  bVar2 = Deserializer_readInteger(stream_00,(int *)((int)this + 0x40));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\AttributeModifier.cpp",0x158);
  }
  Deserializer_readInteger(stream_00,(int *)((int)this + 0x44));
  bVar2 = Deserializer_readInteger(stream_00,(int *)&stack0xffffffe4);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\AttributeModifier.cpp",0x15d);
  }
  *(undefined4 *)((int)this + 0x48) = unaff_EDI;
  Deserializer_readInteger(stream_00,(int *)&stack0xffffffe8);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\AttributeModifier.cpp",0x161);
  }
  *(int *)((int)this + 0x4c) = unaff_ESI;
  cVar1 = (**(code **)(*(int *)((int)this + 0x50) + 0x24))(stream_00);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\AttributeModifier.cpp",0x165);
  }
  bVar2 = Deserializer_readInteger(stream_00,(int *)((int)this + 0x5c));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\AttributeModifier.cpp",0x168);
  }
  bVar2 = Deserializer_readInteger(stream_00,&iStack_10);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\AttributeModifier.cpp",0x16b);
  }
  bVar2 = Deserializer_readInteger(stream_00,(int *)&stack0xffffffe8);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\AttributeModifier.cpp",0x16e);
  }
  *(bool *)((int)this + 0x61) = unaff_ESI != 0;
  cVar1 = (**(code **)(*(int *)((int)this + 100) + 0x24))(stream_00);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\AttributeModifier.cpp",0x172);
  }
  if (1 < iStack_c) {
    bVar2 = Deserializer_readInteger(stream_00,(int *)((int)this + 0xf8));
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\game\\AttributeModifier.cpp",0x176);
    }
  }
  if (2 < iStack_c) {
    bVar2 = Deserializer_readInteger(stream_00,(int *)&stack0xffffffe8);
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\game\\AttributeModifier.cpp",0x17a);
    }
    *(bool *)((int)this + 0xfc) = unaff_ESI != 0;
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

