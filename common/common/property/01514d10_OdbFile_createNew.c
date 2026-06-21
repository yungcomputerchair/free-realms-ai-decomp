// addr: 0x01514d10
// name: OdbFile_createNew
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * OdbFile_createNew(void) */

void * OdbFile_createNew(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  FILE *pFVar4;
  char *in_stack_00000004;
  char *pcVar5;
  undefined4 uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58 [4];
  void *local_54;
  undefined4 local_44;
  uint local_40;
  undefined1 local_3c [6];
  uint local_36;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates a new binary object database directory/objects file, replacing a
                       non-directory path if needed, then initializes allocation/index data. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b7048;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffa4;
  ExceptionList = &local_c;
  if (DAT_01cbeab0 == (void *)0x0) {
    DAT_01cbeab0 = _calloc(1,0x2000);
  }
  puVar2 = OdbStore_createForDirectory(in_stack_00000004);
  iVar3 = FUN_00d8dd48(*puVar2,local_3c,uVar1);
  if (iVar3 == -1) {
    iVar3 = OdbFile_createDirectory((char *)*puVar2);
    if (iVar3 == -1) {
      uVar6 = *puVar2;
      pcVar5 = "Cannot create binary directory \"%s\".\n";
      goto LAB_01514d89;
    }
  }
  else if ((local_36 & 0xf000) != 0x4000) {
    iVar3 = thunk_FUN_00d8e520(*puVar2);
    if (iVar3 == -1) {
      uVar6 = *puVar2;
      pcVar5 = "Cannot delete file \"%s\".\n";
      goto LAB_01514d89;
    }
    iVar3 = OdbFile_createDirectory((char *)*puVar2);
    if (iVar3 == -1) {
      uVar6 = *puVar2;
      pcVar5 = "Cannot create directory \"%s\".\n";
      goto LAB_01514d89;
    }
  }
  pFVar4 = _fopen((char *)puVar2[1],"wb+");
  puVar2[4] = pFVar4;
  if (pFVar4 == (FILE *)0x0) {
    uVar6 = *puVar2;
    pcVar5 = "Cannot open object database file \"%s/objects\".\n";
  }
  else {
    iVar3 = FUN_00d8dd48(puVar2[1],local_3c);
    if (-1 < iVar3) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_58,(char *)puVar2[2]);
      local_4 = 0;
      OdbLookup_load((void *)puVar2[8],local_58);
      local_4 = 0xffffffff;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        _free(local_54);
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54 = (void *)((uint)local_54 & 0xffffff00);
      OdbFile_initAllocationBitmap();
      OdbFile_rebuildAllocatedBlockMap();
      if (puVar2[0x10] == 0) {
        puVar2[0x10] = 1;
      }
      ExceptionList = local_c;
      return puVar2;
    }
    uVar6 = *puVar2;
    pcVar5 = "Cannot stat database file \"%s/objects\".\n";
  }
LAB_01514d89:
  iVar3 = FUN_00d8e276(pcVar5,uVar6);
  FUN_00d8b416(iVar3 + 0x40);
  iVar3 = FUN_00d8e276();
  _fflush((void *)(iVar3 + 0x40));
                    /* WARNING: Subroutine does not return */
  CRT_exit(1);
}

