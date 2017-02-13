import sys

def main():
    songs = []
    number_of_entries = int(sys.stdin.readline())
    for i in range(0, number_of_entries):
        line = sys.stdin.readline()
        line_as_list = line.split(" ")
        end = float(line_as_list[0])
        total_time = float(line_as_list[1])
        kilobits = float(line_as_list[2])
        start = end - total_time
        song = (start, end, total_time, kilobits)
        songs.append(song)
    number_of_queries = int(sys.stdin.readline())
    for i in range(0, number_of_queries):
        line = sys.stdin.readline()
        line_as_list = line.split(" ")
        interval_start = float(line_as_list[0])
        interval_end = float(line_as_list[1])
        total = 0
        for song in songs:
            song_start = song[0]
            song_end = song[1]
            song_total_time = song[2]
            song_kilobits = song[3]
            if(interval_start <= song_end and song_start <= interval_end):
                if(interval_start < song_start and interval_end < song_end):
                    total_play_time = interval_end - song_start
                    total_kilobits = total_play_time * song_kilobits
                    total_bits = total_kilobits / 1000
                    total += total_bits
                elif(interval_start <= song_start and interval_end >= song_end):
                    total_kilobits = song_total_time * song_kilobits
                    total_bits = total_kilobits / 1000 
                    total += total_bits
                elif(interval_start > song_start and interval_end < song_end):
                    total_play_time = interval_end - interval_start
                    total_kilobits = total_play_time * song_kilobits
                    total_bits = total_kilobits / 1000
                    total += total_bits
                else:
                    total_play_time = song_end - interval_start
                    total_kilobits = total_play_time * song_kilobits
                    total_bits = total_kilobits / 1000
                    total += total_bits
        x = '{0:.3f}'.format(total)
        print(x)

if __name__ == '__main__':
    main()