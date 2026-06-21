// addr: 0x00f9e600
// name: SCEA_BinXML_Streamable_nextChunk
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall SCEA_BinXML_Streamable_nextChunk(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* Walks through chained/aliased Streamable objects and returns the next data
                       chunk while storing its size. It delegates to virtual accessors depending on
                       whether the current object owns a flat buffer or a nested stream. */
  cVar1 = (char)param_1[1];
  while (cVar1 != '\0') {
    param_1 = (int *)param_1[3];
    cVar1 = (char)param_1[1];
  }
  if ((*(char *)((int)param_1 + 5) == '\0') && (param_1[2] == 0)) {
    iVar2 = (**(code **)(*param_1 + 0x10))(param_2);
    return iVar2;
  }
  uVar3 = (**(code **)(*param_1 + 4))();
  *param_2 = uVar3;
  return param_1[3];
}

