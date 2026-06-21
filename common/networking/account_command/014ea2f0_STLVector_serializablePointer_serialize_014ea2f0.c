// addr: 0x014ea2f0
// name: STLVector_serializablePointer_serialize_014ea2f0
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLVector_serializablePointer_serialize_014ea2f0(void * writer, int
   vector) */

int __thiscall STLVector_serializablePointer_serialize_014ea2f0(void *this,void *writer,int vector)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  int iVar4;
  uint3 extraout_var;
  undefined4 *puVar5;
  int unaff_EDI;
  
                    /* Serializes a vector of serializable object pointers by writing count and
                       invoking virtual serialize on each element. */
  pvVar2 = writer;
  if (*(int *)((int)writer + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int)writer + 8) - *(int *)((int)writer + 4) >> 2;
  }
  Serializer_startAppendingSTLContainer(*(void **)this,iVar4,unaff_EDI);
  puVar1 = *(undefined4 **)((int)pvVar2 + 8);
  if (puVar1 < *(undefined4 **)((int)pvVar2 + 4)) {
    FUN_00d83c2d();
  }
  puVar5 = *(undefined4 **)((int)pvVar2 + 4);
  if (*(undefined4 **)((int)pvVar2 + 8) < puVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar5 == puVar1) break;
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)pvVar2 + 8) <= puVar5) {
      FUN_00d83c2d();
    }
    writer = (void *)*puVar5;
    bVar3 = SerializeVirtualObjectPtrElement_alt(*(void **)this,&writer);
    if (!bVar3) {
      return (uint)extraout_var << 8;
    }
    if (*(undefined4 **)((int)pvVar2 + 8) <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 1;
  }
  iVar4 = Serialize_returnTrue();
  return iVar4;
}

