// addr: 0x004e6023
// name: FileHandle_getFileStatus
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FileHandle_getFileStatus(void * this, void * outStatus) */

bool __thiscall FileHandle_getFileStatus(void *this,void *outStatus)

{
  BOOL BVar1;
  longlong lVar2;
  _BY_HANDLE_FILE_INFORMATION local_38;
  
                    /* Uses GetFileInformationByHandle to fill a status record with size,
                       attributes/permissions, and access/write/create times. */
  BVar1 = GetFileInformationByHandle(*(HANDLE *)((int)this + 0x14),&local_38);
  if (BVar1 != 0) {
    *(DWORD *)outStatus = local_38.nFileSizeLow;
    *(int *)((int)outStatus + 4) = (int)local_38.nFileSizeLow >> 0x1f;
    lVar2 = __allshr(9,((int)local_38.nFileSizeLow >> 0x1f) +
                       (uint)(0xfffffe00 < local_38.nFileSizeLow));
    *(longlong *)((int)outStatus + 8) = lVar2;
    *(undefined4 *)((int)outStatus + 0x14) = 0;
    *(undefined4 *)((int)outStatus + 0x18) = 0;
    *(undefined4 *)((int)outStatus + 0x20) = 0;
    *(undefined4 *)((int)outStatus + 0x1c) = 0;
    *(uint *)((int)outStatus + 0x10) =
         (-(uint)((local_38.dwFileAttributes & 1) != 0) & 0xffffff40) + 0x1c0;
    FUN_004de301(&local_38.ftLastAccessTime,(int)outStatus + 0x30);
    FUN_004de301(&local_38.ftLastWriteTime,(int)outStatus + 0x38);
    FUN_004de301(&local_38.ftCreationTime,(int)outStatus + 0x28);
    FUN_004cc6e4(0);
  }
  return BVar1 != 0;
}

