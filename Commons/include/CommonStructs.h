#ifndef COMMON_STRUCTS_H
#define COMMON_STRUCTS_H

typedef struct _OPEN_FILE_INFORMATION
{
    LARGE_INTEGER   FileSize;
    LARGE_INTEGER   SectorSize;
    USHORT          DiskOffset;
    CHAR            Password[16];
    USHORT          PasswordLength;
    CHAR            DriveLetter;
    USHORT          FileNameLength;
    CHAR            FileName[260];
} OPEN_FILE_INFORMATION, *POPEN_FILE_INFORMATION;

typedef struct _DISK_INFO
{
    USHORT DiskCount;
    OPEN_FILE_INFORMATION disks[26];

} DISK_INFO, *PDISK_INFO;

#define IOCTL_FILE_DISK_OPEN_FILE   CTL_CODE(FILE_DEVICE_DISK, 0x800, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_FILE_DISK_CLOSE_FILE  CTL_CODE(FILE_DEVICE_DISK, 0x801, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_FILE_DISK_QUERY_FILE  CTL_CODE(FILE_DEVICE_DISK, 0x802, METHOD_BUFFERED, FILE_READ_ACCESS)
#define IOCTL_FILE_DISK_UNMOUNT_ALL  CTL_CODE(FILE_DEVICE_DISK, 0x803, METHOD_BUFFERED, FILE_READ_ACCESS)

#endif // COMMON_STRUCTS_H
