// addr: 0x01400d80
// name: STLMap_intToIntVectorElement_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLMap_intToIntVectorElement_serialize(int serializer, int * entry_pair)
    */

int __cdecl STLMap_intToIntVectorElement_serialize(int serializer,int *entry_pair)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int local_4;
  
                    /* Serializes one map element consisting of a dword/int key followed by a
                       vector<int> value. It first serializes *entry_pair and only serializes the
                       vector at entry_pair+1 if the key write succeeds. */
  bVar1 = Serializer_appendInteger((void *)serializer,*entry_pair);
  if (!bVar1) {
    return CONCAT31(extraout_var,bVar1);
  }
  local_4 = serializer;
  iVar2 = STLVector_int_serialize(&local_4,(int)(entry_pair + 1));
  return iVar2;
}

