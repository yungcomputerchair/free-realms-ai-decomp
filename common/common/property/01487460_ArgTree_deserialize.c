// addr: 0x01487460
// name: ArgTree_deserialize
// subsystem: common/common/property
// source (binary assert): common/common/property/ArgTree.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArgTree_deserialize(void * this, void * reader) */

void __thiscall ArgTree_deserialize(void *this,void *reader)

{
  code *pcVar1;
  void *this_00;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBX;
  undefined4 unaff_ESI;
  int iStack_8;
  
                    /* Deserializes an ArgTree node from a persistent reader: it begins the object
                       read, reads node fields and child entries with checked stream operations,
                       handles optional child slots based on the child count, and finalizes the
                       read. The repeated false asserts are stream-read success checks in
                       ArgTree.cpp. */
  this_00 = reader;
  (**(code **)(*(int *)this + 0x10))(reader,&reader);
  bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 8));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\property\\ArgTree.cpp",0x111);
  }
  bVar2 = Deserializer_readInteger(this_00,(int *)&stack0xffffffec);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\property\\ArgTree.cpp",0x114);
  }
  *(undefined4 *)((int)this + 0xc) = unaff_ESI;
  cVar3 = (**(code **)(*(int *)((int)this + 0x10) + 0x24))(this_00);
  if (cVar3 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\property\\ArgTree.cpp",0x118);
  }
  uVar4 = ArgTree_deserializeChildMap(&stack0xffffffec);
  if ((char)uVar4 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\property\\ArgTree.cpp",0x11e);
  }
  if (1 < iStack_8) {
    bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 0x28));
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\property\\ArgTree.cpp",0x122);
    }
  }
  if (2 < iStack_8) {
    bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 0x2c));
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\property\\ArgTree.cpp",0x127);
    }
  }
  if (3 < iStack_8) {
    bVar2 = Deserializer_readInteger(this_00,(int *)&stack0xfffffff0);
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\property\\ArgTree.cpp",300);
    }
    pcVar1 = *(code **)(*(int *)this + 0x14);
    *(bool *)((int)this + 0x30) = unaff_EBX != 0;
    (*pcVar1)(this_00);
    return;
  }
  if ((iStack_8 < 4) && ((*(int *)((int)this + 0xc) == 3 || (*(int *)((int)this + 0xc) == 8)))) {
    bVar2 = ValueData_containsInt((void *)((int)this + 0x10),0);
    *(bool *)((int)this + 0x30) = !bVar2;
  }
  (**(code **)(*(int *)this + 0x14))(this_00);
  return;
}

