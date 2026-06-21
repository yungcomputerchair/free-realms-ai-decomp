// addr: 0x0144e990
// name: HandleResponseState_deserializeWithHooks
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool HandleResponseState_deserializeWithHooks(void * this, void * reader) */

bool __thiscall HandleResponseState_deserializeWithHooks(void *this,void *reader)

{
  void *pvVar1;
  char cVar2;
  undefined1 uVar3;
  
                    /* Runs virtual pre/post hooks around FUN_01414b70 deserialization and returns
                       false on failure. Exact class inferred from neighboring CWHandleResponseState
                       constructors. */
  pvVar1 = reader;
  cVar2 = (**(code **)(*(int *)this + 0x10))(reader,&reader);
  if (cVar2 != '\0') {
    cVar2 = FUN_01414b70(pvVar1);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*(int *)this + 0x14))(pvVar1);
      return (bool)uVar3;
    }
  }
  return false;
}

