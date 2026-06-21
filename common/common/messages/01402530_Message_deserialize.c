// addr: 0x01402530
// name: Message_deserialize
// subsystem: common/common/messages
// source (binary assert): common/common/messages/Message.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Message_deserialize(void * this, void * serializer) */

bool __thiscall Message_deserialize(void *this,void *serializer)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Deserializes the common Message header/body around virtual pre/post hooks. It
                       calls a vtable method, reads members at +4, +8, and +0xc, asserts false on
                       one failed read, then invokes another virtual method. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(serializer,&local_4);
  if (cVar1 != '\0') {
    bVar2 = Deserializer_readInteger(serializer,(int *)((int)this + 4));
    if (bVar2) {
      bVar2 = Deserializer_readInteger(serializer,(int *)((int)this + 8));
      if (bVar2) {
        local_4 = serializer;
        cVar1 = EvaluationEnvironment_readStringPairs((int)this + 0xc);
        if (cVar1 == '\0') {
          FUN_012f5a60("false","..\\common\\common\\messages\\Message.cpp",0xac);
        }
        uVar3 = (**(code **)(*(int *)this + 0x14))(serializer);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

