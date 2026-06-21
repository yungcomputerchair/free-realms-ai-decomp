// addr: 0x00da045a
// name: _calloc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  local_8 = 0;
  pvVar2 = (void *)__calloc_impl(_Count,_Size,&local_8);
  iVar1 = local_8;
  if (((pvVar2 == (void *)0x0) && (local_8 != 0)) && (iVar3 = FUN_00d8e452(), iVar3 != 0)) {
    piVar4 = (int *)FUN_00d8e452();
    *piVar4 = iVar1;
  }
  return pvVar2;
}

