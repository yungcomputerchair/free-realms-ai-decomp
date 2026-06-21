// addr: 0x01002e00
// name: VideoCapture_EncoderThreadImpl_getDestFileName
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_EncoderThreadImpl_getDestFileName(void * outString) */

void VideoCapture_EncoderThreadImpl_getDestFileName(void *outString)

{
                    /* Thin thunk used during completion to fill a string-like local before
                       constructing DestFileDoneParams. Evidence:
                       VideoCapture_handleFuncMessageComplete constructs an IString, calls this
                       thunk into the local buffer, then passes it to DestFileDoneParams. */
  FUN_01002a70();
  return;
}

