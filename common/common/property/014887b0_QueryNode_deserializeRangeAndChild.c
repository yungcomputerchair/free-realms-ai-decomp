// addr: 0x014887b0
// name: QueryNode_deserializeRangeAndChild
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool QueryNode_deserializeRangeAndChild(void * this, void * stream) */

bool __thiscall QueryNode_deserializeRangeAndChild(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int local_4;
  
                    /* Deserializes a QueryNode variant with range fields, a child node, flags, and
                       final commit hook. */
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 != '\0') {
    bVar2 = QueryNode_validateAndApplyChild(this,stream);
    if (bVar2) {
      bVar2 = Deserializer_readInteger(stream,&local_4);
      if (bVar2) {
        *(int *)((int)this + 0x1c) = local_4;
        bVar2 = Deserializer_readInteger(stream,&local_4);
        if (bVar2) {
          *(int *)((int)this + 0x24) = local_4;
          bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffe8);
          if (bVar2) {
            *(undefined4 *)((int)this + 0x20) = unaff_EDI;
            cVar1 = (**(code **)(*(int *)((int)this + 0x10) + 0x24))(stream);
            if (cVar1 != '\0') {
              bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffe8);
              if (bVar2) {
                *(undefined4 *)((int)this + 0x24) = unaff_EDI;
                bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffec);
                if (bVar2) {
                  *(undefined4 *)((int)this + 0x28) = unaff_ESI;
                  uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
                  return (bool)uVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

