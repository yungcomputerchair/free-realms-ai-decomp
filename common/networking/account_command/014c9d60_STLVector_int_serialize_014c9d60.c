// addr: 0x014c9d60
// name: STLVector_int_serialize_014c9d60
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLVector_int_serialize_014c9d60(void * writer, int vector) */

int __thiscall STLVector_int_serialize_014c9d60(void *this,void *writer,int vector)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  uint extraout_EAX;
  undefined4 *puVar4;
  int unaff_EDI;
  
                    /* Serializes a vector of 32-bit integers, writing the count and each dword
                       element. */
  pvVar2 = writer;
  if (*(int *)((int)writer + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((int)writer + 8) - *(int *)((int)writer + 4) >> 2;
  }
  Serializer_startAppendingSTLContainer(*(void **)this,iVar3,unaff_EDI);
  puVar1 = *(undefined4 **)((int)pvVar2 + 8);
  if (puVar1 < *(undefined4 **)((int)pvVar2 + 4)) {
    FUN_00d83c2d();
  }
  puVar4 = *(undefined4 **)((int)pvVar2 + 4);
  if (*(undefined4 **)((int)pvVar2 + 8) < puVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar1) break;
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)pvVar2 + 8) <= puVar4) {
      FUN_00d83c2d();
    }
    writer = (void *)*puVar4;
    SerializeDwordElement(*(void **)this,(int *)&writer);
    if ((char)extraout_EAX == '\0') {
      return extraout_EAX & 0xffffff00;
    }
    if (*(undefined4 **)((int)pvVar2 + 8) <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 1;
  }
  iVar3 = Serialize_returnTrue();
  return iVar3;
}

