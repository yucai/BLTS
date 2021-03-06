/* csv_file.h -- CSV file handling (library internal use)

   Copyright (C) 2000-2011, Nokia Corporation.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, version 2.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef CSV_FILE_H
#define CSV_FILE_H

int csv_result_file_open(char *path, int append_mode);
int csv_result_add(char *str);
int csv_result_file_close();

#endif /* CSV_FILE_H */

