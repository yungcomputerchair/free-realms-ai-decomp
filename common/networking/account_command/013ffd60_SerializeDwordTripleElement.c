// addr: 0x013ffd60
// name: SerializeDwordTripleElement
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int SerializeDwordTripleElement(void * stream, int * triple) */

int __cdecl SerializeDwordTripleElement(void *stream,int *triple)

{
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar2;
  uint3 extraout_var_00;
  undefined3 extraout_var_01;
  
                    /* Serializes a three-dword element, stopping on the first failed scalar write.
                        */
  bVar1 = Serializer_appendInteger(stream,*triple);
  uVar2 = extraout_var;
  if (bVar1) {
    bVar1 = Serializer_appendInteger(stream,triple[1]);
    uVar2 = extraout_var_00;
    if (bVar1) {
      bVar1 = Serializer_appendInteger(stream,triple[2]);
      return CONCAT31(extraout_var_01,bVar1);
    }
  }
  return (uint)uVar2 << 8;
}

