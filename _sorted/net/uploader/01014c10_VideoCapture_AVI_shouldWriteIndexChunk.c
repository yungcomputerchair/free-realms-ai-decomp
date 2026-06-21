// addr: 0x01014c10
// name: VideoCapture_AVI_shouldWriteIndexChunk
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __thiscall
VideoCapture_AVI_shouldWriteIndexChunk(int param_1,void *param_2,void *param_3,void **param_4)

{
  bool bVar1;
  
                    /* Conditionally calls the AVI index-writing helper when the incoming marker
                       matches the global AVI marker or when an index is already open; otherwise
                       returns success without work. Evidence is caller/callee context around
                       VideoCapture AVI index routines. */
  if (DAT_01cb6084 == param_3) {
    bVar1 = VideoCapture_AVI_replaceIndexChunk
                      ((void *)(*(int *)(param_1 + 0x78) + 0x98),param_2,DAT_01cb6084,param_4);
    return bVar1;
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    return true;
  }
  bVar1 = VideoCapture_AVI_replaceIndexChunk
                    ((void *)(*(int *)(param_1 + 0x80) + 0x80),param_2,DAT_01cb60b0,param_4);
  return bVar1;
}

