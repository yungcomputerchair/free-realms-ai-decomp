// addr: 0x01514b80
// name: OdbFile_openExisting
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * OdbFile_openExisting(char * path, bool readOnly) */

void * __cdecl OdbFile_openExisting(char *path,bool readOnly)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  FILE *pFVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *_Mode;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58 [28];
  undefined1 local_3c [6];
  uint local_36;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Opens an existing binary object database directory and its objects file,
                       initializes allocation/index structures, or reports fatal open/stat errors.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b7018;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffa4;
  ExceptionList = &local_c;
  if (DAT_01cbeab0 == (void *)0x0) {
    DAT_01cbeab0 = _calloc(1,0x2000);
  }
  puVar2 = OdbStore_createForDirectory(path);
  iVar3 = FUN_00d8dd48(*puVar2,local_3c,uVar1);
  if (iVar3 == -1) {
    iVar3 = FUN_00d8e276("Cannot find binary directory \"%s\".\n",*puVar2);
    FUN_00d8b416(iVar3 + 0x40);
    iVar3 = FUN_00d8e276();
    _fflush((void *)(iVar3 + 0x40));
    ExceptionList = local_c;
    return (void *)0x0;
  }
  if ((local_36 & 0xf000) == 0x4000) {
    if (readOnly) {
      pcVar5 = (char *)puVar2[1];
      _Mode = "rb";
    }
    else {
      pcVar5 = (char *)puVar2[1];
      _Mode = "rb+";
    }
    pFVar4 = _fopen(pcVar5,_Mode);
    puVar2[4] = pFVar4;
    if (pFVar4 == (FILE *)0x0) {
      uVar6 = *puVar2;
      pcVar5 = "Cannot open object database file \"%s/objects\".\n";
    }
    else {
      iVar3 = FUN_00d8dd48(puVar2[1],local_3c,uVar1);
      if (-1 < iVar3) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_58,(char *)puVar2[2]);
        local_4 = 0;
        OdbLookup_load((void *)puVar2[8],local_58);
        local_4 = 0xffffffff;
        FUN_0041f1d7();
        OdbFile_initAllocationBitmap();
        OdbFile_rebuildAllocatedBlockMap();
        puVar2[0x10] = 1;
        ExceptionList = local_c;
        return puVar2;
      }
      uVar6 = *puVar2;
      pcVar5 = "Cannot stat database file \"%s/objects\".\n";
    }
  }
  else {
    uVar6 = *puVar2;
    pcVar5 = "Binary db \"%s\" is not a directory.\n";
  }
  iVar3 = FUN_00d8e276(pcVar5,uVar6);
  FUN_00d8b416(iVar3 + 0x40);
  iVar3 = FUN_00d8e276();
  _fflush((void *)(iVar3 + 0x40));
                    /* WARNING: Subroutine does not return */
  CRT_exit(1);
}

