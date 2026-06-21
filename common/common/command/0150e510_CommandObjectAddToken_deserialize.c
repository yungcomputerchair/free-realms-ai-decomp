// addr: 0x0150e510
// name: CommandObjectAddToken_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectAddToken.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectAddToken_deserialize(void * this, void * stream) */

void __thiscall CommandObjectAddToken_deserialize(void *this,void *stream)

{
  code *pcVar1;
  char cVar2;
  char extraout_AL;
  bool bVar3;
  void *pvVar4;
  undefined4 unaff_EDI;
  undefined1 *puStack_18;
  int iStack_8;
  undefined1 local_4 [4];
  
                    /* Deserializes a CommandObjectAddToken: base data, a nested/member object,
                       token property/type fields, and an optional referenced object. Assert paths
                       in CommandObjectAddToken.cpp. */
  puStack_18 = local_4;
  cVar2 = (**(code **)(*(int *)this + 0x10))(stream);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddToken.cpp",0x8d);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddToken.cpp",0x90);
  }
  cVar2 = (**(code **)(*(int *)((int)this + 0x11c) + 0x24))(stream);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddToken.cpp",0x93);
  }
  Deserializer_readInteger(stream,&iStack_8);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddToken.cpp",0x96);
  }
  *(int *)((int)this + 0x128) = iStack_8;
  bVar3 = Deserializer_readInteger(stream,(int *)&puStack_18);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddToken.cpp",0x9a);
  }
  if (puStack_18 != (undefined1 *)0x0) {
    pvVar4 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x28),(int)puStack_18);
    *(void **)((int)this + 300) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddToken.cpp",0x9e);
    }
  }
  bVar3 = Deserializer_readInteger(stream,(int *)&stack0xffffffec);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddToken.cpp",0xa3);
  }
  pcVar1 = *(code **)(*(int *)this + 0x14);
  *(undefined4 *)((int)this + 0x130) = unaff_EDI;
  (*pcVar1)(stream);
  return;
}

