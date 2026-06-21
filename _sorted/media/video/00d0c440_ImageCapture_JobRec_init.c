// addr: 0x00d0c440
// name: ImageCapture_JobRec_init
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ImageCapture_JobRec_init(void * jobRec) */

void __fastcall ImageCapture_JobRec_init(void *jobRec)

{
                    /* Zero-initializes the small ImageCapture job record fields used by the JPG
                       encode queue. Evidence: VideoCapture_JPG_openEncoder allocates 0x1c bytes,
                       calls this initializer, then stores it through the job-record pointer
                       wrapper. */
  *(undefined4 *)jobRec = 0;
  *(undefined4 *)((int)jobRec + 8) = 0;
  *(undefined4 *)((int)jobRec + 0x10) = 0;
  *(undefined1 *)((int)jobRec + 0x18) = 0;
  return;
}

