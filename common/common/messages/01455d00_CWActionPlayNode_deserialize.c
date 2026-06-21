// addr: 0x01455d00
// name: CWActionPlayNode_deserialize
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWActionPlayNode_deserialize(void * thisObj, void * deserializer) */

bool __thiscall CWActionPlayNode_deserialize(void *this,void *thisObj,void *deserializer)

{
  void *deserializer_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes a CWActionPlayNode/ZPActionPlayNode by entering the serialized
                       object, deserializing the base node, and leaving on success. Evidence is the
                       neighboring CWActionPlayNode vtable/registration block and the paired dump
                       routine with Starting ZPActionPlayNode strings. */
  deserializer_00 = thisObj;
  cVar1 = (**(code **)(*(int *)this + 0x10))(thisObj,&thisObj);
  if (cVar1 != '\0') {
    bVar2 = ActionPlayNode_deserialize(this,deserializer_00);
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x14))(deserializer_00);
      return (bool)uVar3;
    }
  }
  return false;
}

