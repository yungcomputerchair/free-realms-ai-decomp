// addr: 0x013828b0
// name: STLVector_intSerializable_serialize_013828b0
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLVector_intSerializable_serialize_013828b0(void * writer, int vector) */

int __thiscall STLVector_intSerializable_serialize_013828b0(void *this,void *writer,int vector)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Serializes a vector of 16-byte entries made of an integer key and an embedded
                       serializable value/object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01682ad0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)writer + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((int)writer + 8) - *(int *)((int)writer + 4) >> 4;
  }
  Serializer_startAppendingSTLContainer(*(void **)this,iVar3,DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  puVar1 = *(undefined4 **)((int)writer + 8);
  if (puVar1 < *(undefined4 **)((int)writer + 4)) {
    FUN_00d83c2d();
  }
  puVar5 = *(undefined4 **)((int)writer + 4);
  if (*(undefined4 **)((int)writer + 8) < puVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (writer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar5 == puVar1) break;
    if (writer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)writer + 8) <= puVar5) {
      FUN_00d83c2d();
    }
    local_1c[0] = (void *)*puVar5;
    ValueData_ctor(puVar5 + 1);
    local_4 = 1;
    bVar2 = STLPair_intSerializable_serialize(*(void **)this,local_1c);
    if (!bVar2) {
      local_4 = 0xffffffff;
      uVar4 = FUN_01300cd0();
      ExceptionList = local_c;
      return uVar4 & 0xffffff00;
    }
    local_4 = 0xffffffff;
    FUN_01300cd0();
    if (*(undefined4 **)((int)writer + 8) <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 4;
  }
  iVar3 = Serialize_returnTrue();
  ExceptionList = local_c;
  return iVar3;
}

