// addr: 0x015134a0
// name: OdbFile_putRecord
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool OdbFile_putRecord(void * db, void * data, uint size, uint recordId) */

bool __cdecl OdbFile_putRecord(void *db,void *data,uint size,uint recordId)

{
  void *self;
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  void *count;
  uint uVar5;
  int unaff_EDI;
  uint uVar6;
  uint local_8;
  int local_4;
  
                    /* Writes an object database record, reallocating blocks as needed, updating the
                       record index, XOR-obfuscating the bytes with 0x46, and flushing the file. */
  self = db;
  local_8 = 0xffffffff;
  bVar1 = OdbFile_findRecordEntry(*(void **)((int)db + 0x20),recordId,&local_8,(uint *)&db);
  if (bVar1) {
    if (*(int *)((int)self + 0x40) != 0) {
      thunk_FUN_00d8e520(*(undefined4 *)((int)self + 0xc));
      *(undefined4 *)((int)self + 0x40) = 0;
    }
    count = (void *)size;
    uVar5 = size >> 8;
    if ((char)size != '\0') {
      uVar5 = uVar5 + 1;
    }
    uVar6 = (uint)db >> 8;
    if ((char)db != '\0') {
      uVar6 = uVar6 + 1;
    }
    if (uVar6 < uVar5) {
      local_4 = (int)(local_8 + ((int)local_8 >> 0x1f & 0xffU)) >> 8;
      bVar1 = DynamicBitset_isRangeClear(self);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        DynamicBitset_clearRange(self);
        goto LAB_015135ef;
      }
      if (*(int *)((int)self + 0x30) != 0) {
        FUN_01512140(local_4,uVar5);
      }
      OdbFile_markBlocksAllocated(((int)(local_8 + ((int)local_8 >> 0x1f & 0xffU)) >> 8) + uVar6);
      count = (void *)size;
      uVar2 = local_8;
    }
    else {
      if (*(int *)((int)self + 0x30) != 0) {
        FUN_01512140((int)(local_8 + ((int)local_8 >> 0x1f & 0xffU)) >> 8,uVar6);
      }
      uVar2 = local_8;
      if (uVar5 < uVar6) {
        DynamicBitset_clearRange(self);
        count = (void *)size;
        uVar2 = local_8;
      }
    }
LAB_01513609:
    if (count == db) goto LAB_01513628;
  }
  else {
    *(int *)((int)self + 0x28) = *(int *)((int)self + 0x28) + 1;
    if (*(int *)((int)self + 0x40) != 0) {
      thunk_FUN_00d8e520(*(undefined4 *)((int)self + 0xc));
      *(undefined4 *)((int)self + 0x40) = 0;
    }
LAB_015135ef:
    uVar2 = OdbFile_allocateBlocks();
    uVar2 = uVar2 << 8;
    count = (void *)size;
    if (uVar2 == local_8) goto LAB_01513609;
  }
  bVar1 = OdbRecordIndex_insertLocation((void *)recordId,uVar2,(int)count,unaff_EDI);
  if (!bVar1) {
    return false;
  }
LAB_01513628:
  iVar3 = _fseek(*(FILE **)((int)self + 0x10),uVar2,0);
  if (iVar3 != 0) {
    FUN_01535f00("ERROR: Seek failed for %l.",recordId);
    return false;
  }
  pvVar4 = (void *)0x0;
  if (count != (void *)0x0) {
    do {
      *(byte *)((int)pvVar4 + (int)data) = *(byte *)((int)pvVar4 + (int)data) ^ 0x46;
      pvVar4 = (void *)((int)pvVar4 + 1);
    } while (pvVar4 < count);
  }
  db = (void *)_fwrite(data,1,(size_t)count,*(void **)((int)self + 0x10));
  _fflush(*(void **)((int)self + 0x10));
  if (db != count) {
    iVar3 = FUN_00d8e276("odb_put: only wrote %d of %d bytes.\n",db,count);
    FUN_00d8b416(iVar3 + 0x40);
    FUN_01535eb0("odb_put: only wrote %d of %d bytes.",db,count);
  }
  return true;
}

