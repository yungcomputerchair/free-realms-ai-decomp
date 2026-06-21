// addr: 0x013d3e10
// name: STLVector_cardInstance_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLVector_cardInstance_serialize(void * writer, void * vector) */

int __thiscall STLVector_cardInstance_serialize(void *this,void *writer,void *vector)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint extraout_EAX;
  uint uVar4;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Serializes/dumps a vector of 16-byte card-instance records by writing the
                       element count, wrapping each record, and invoking the record's virtual
                       dump/serialize routine. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168b638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)writer + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((int)writer + 8) - *(int *)((int)writer + 4) >> 4;
  }
  Serializer_startAppendingSTLContainer(*(void **)this,iVar3,DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  uVar1 = *(uint *)((int)writer + 8);
  if (uVar1 < *(uint *)((int)writer + 4)) {
    FUN_00d83c2d();
  }
  uVar4 = *(uint *)((int)writer + 4);
  if (*(uint *)((int)writer + 8) < uVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (writer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (uVar4 == uVar1) break;
    if (writer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)writer + 8) <= uVar4) {
      FUN_00d83c2d();
    }
    InstanceID_copy_ctor(uVar4);
    local_4 = 0;
    bVar2 = STLVector_cardInstance_serializeElement(*(void **)this,local_1c);
    if (!bVar2) {
      local_4 = 0xffffffff;
      InstanceID_dtor(local_1c);
      ExceptionList = local_c;
      return extraout_EAX & 0xffffff00;
    }
    local_4 = 0xffffffff;
    InstanceID_dtor(local_1c);
    if (*(uint *)((int)writer + 8) <= uVar4) {
      FUN_00d83c2d();
    }
    uVar4 = uVar4 + 0x10;
  }
  iVar3 = Serialize_returnTrue();
  ExceptionList = local_c;
  return iVar3;
}

