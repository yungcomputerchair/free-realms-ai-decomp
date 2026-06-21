// addr: 0x014237e0
// name: QueryNode_deserializeChild
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool QueryNode_deserializeChild(void * this, void * stream) */

bool __thiscall QueryNode_deserializeChild(void *this,void *stream)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  void *local_4;
  
                    /* Deserializes a QueryNode child through virtual hooks, validates/applies the
                       child, stores the resolved child pointer, then commits. */
  local_4 = this;
  cVar2 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar2 != '\0') {
    bVar3 = QueryNode_validateAndApplyChild(this,stream);
    if (bVar3) {
      bVar3 = Deserializer_readInteger(stream,(int *)&local_4);
      if (bVar3) {
        pcVar1 = *(code **)(*(int *)this + 0x14);
        *(void **)((int)this + 0x10) = local_4;
        uVar4 = (*pcVar1)(stream);
        return (bool)uVar4;
      }
    }
  }
  return false;
}

