// addr: 0x0150a7a0
// name: CommandObjectDiscardPile_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectDiscardPile.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectDiscardPile_deserialize(void * this, void * stream) */

void __thiscall CommandObjectDiscardPile_deserialize(void *this,void *stream)

{
  char cVar1;
  char extraout_AL;
  bool bVar2;
  int unaff_ESI;
  undefined4 unaff_EDI;
  int iStack_c;
  undefined1 local_8 [4];
  int iStack_4;
  
                    /* Deserializes a CommandObjectDiscardPile: base/version data plus
                       pile/count/flag fields, then finalizes via the command stream hook. Class
                       identified by CommandObjectDiscardPile.cpp asserts. */
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,local_8);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDiscardPile.cpp",0xbc);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDiscardPile.cpp",0xbf);
  }
  bVar2 = Deserializer_readInteger(stream,&iStack_4);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDiscardPile.cpp",0xc2);
  }
  *(int *)((int)this + 0x11c) = iStack_4;
  bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x120));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDiscardPile.cpp",0xc6);
  }
  bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffe8);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDiscardPile.cpp",0xc9);
  }
  *(undefined4 *)((int)this + 0x124) = unaff_EDI;
  bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffec);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDiscardPile.cpp",0xcd);
  }
  *(bool *)((int)this + 0x128) = unaff_ESI != 0;
  bVar2 = Deserializer_readInteger(stream,&iStack_c);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectDiscardPile.cpp",0xd1);
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

