// addr: 0x013c39a0
// name: SerializationBuffer_loadFromPathOrInlineData
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SerializationBuffer_loadFromPathOrInlineData(void * source) */

void __thiscall SerializationBuffer_loadFromPathOrInlineData(void *this,void *source)

{
  bool bVar1;
  uint uVar2;
  int *_Filename;
  FILE *_File;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  void *in_stack_00000008;
  FILE *pFVar7;
  uint local_48;
  undefined1 local_44;
  void *local_40;
  undefined1 local_3c [20];
  uint local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Loads data into the current serialization buffer either from an inline/memory
                       source checked by FUN_013c3860 or by opening the path stored at source+4 and
                       reading its full contents. Evidence is buffer resize/identity calls,
                       _fopen('rb'), PacketBuffer_getSize, and memcpy/file read paths. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016895d8;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffac;
  ExceptionList = &local_c;
  local_48 = 0;
  local_44 = 0;
  local_40 = Mem_Alloc(0x200000);
  local_4 = 0;
  bVar1 = ResourceFile_loadCachedEntry(this,source,&local_48);
  if (bVar1) {
    SerializationBuffer_resize(in_stack_00000008,local_48);
    puVar4 = PacketBuffer_identity(in_stack_00000008);
    _memcpy((void *)*puVar4,local_40,local_48);
LAB_013c3b0a:
    local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  piVar6 = (int *)((int)source + 4);
  _Filename = piVar6;
  if (0xf < *(uint *)((int)source + 0x18)) {
    _Filename = (int *)*piVar6;
  }
  _File = _fopen((char *)_Filename,"rb");
  if (_File == (FILE *)0x0) {
    local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  if (0xf < *(uint *)((int)source + 0x18)) {
    piVar6 = (int *)*piVar6;
  }
  iVar3 = FUN_00d8dd48(piVar6,local_3c,uVar2);
  if (iVar3 == 0) {
    SerializationBuffer_resize(in_stack_00000008,local_28);
    puVar4 = PacketBuffer_identity(in_stack_00000008);
    pFVar7 = _File;
    iVar3 = PacketBuffer_getSize(in_stack_00000008);
    iVar3 = FUN_00d8ae0b(*puVar4,1,iVar3,pFVar7);
    _fclose(_File);
    iVar5 = PacketBuffer_getSize(in_stack_00000008);
    if (iVar3 == iVar5) goto LAB_013c3b0a;
  }
  local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  _free(local_40);
}

