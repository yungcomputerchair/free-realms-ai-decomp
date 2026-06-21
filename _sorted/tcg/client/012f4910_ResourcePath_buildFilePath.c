// addr: 0x012f4910
// name: ResourcePath_buildFilePath
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ResourcePath_buildFilePath(void * out, void * fileName) */

void * __cdecl ResourcePath_buildFilePath(void *out,void *fileName)

{
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Builds a normalized resource/file path into out, using the path builder that
                       handles export: prefixes and export_win32 paths. CardClient_ctor uses it to
                       resolve preferences.dat before loading preferences. */
  puStack_8 = &LAB_01674451;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  local_4 = 1;
  ResourcePath_expandRelativeOrExportPath
            (out,local_28,fileName,DAT_01b839d8 ^ (uint)&stack0xffffffcc);
  local_4 = local_4 & 0xffffff00;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return out;
}

